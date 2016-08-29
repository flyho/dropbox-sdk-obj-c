///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESWriteMode.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESWriteMode 

@synthesize update = _update;

- (instancetype)initWithAdd {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteModeAdd;
    }
    return self;
}

- (instancetype)initWithOverwrite {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteModeOverwrite;
    }
    return self;
}

- (instancetype)initWithUpdate:(NSString *)update {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteModeUpdate;
        _update = update;
    }
    return self;
}

- (BOOL)isAdd {
    return _tag == DBXFILESWriteModeAdd;
}

- (BOOL)isOverwrite {
    return _tag == DBXFILESWriteModeOverwrite;
}

- (BOOL)isUpdate {
    return _tag == DBXFILESWriteModeUpdate;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESWriteModeAdd:
           return @"DBXFILESWriteModeAdd";
        case DBXFILESWriteModeOverwrite:
           return @"DBXFILESWriteModeOverwrite";
        case DBXFILESWriteModeUpdate:
           return @"DBXFILESWriteModeUpdate";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (NSString *)update {
    if (_tag != DBXFILESWriteModeUpdate) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESWriteModeUpdate`, but was %@.", [self getTagName]];
    }
    return _update;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESWriteModeSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESWriteModeSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESWriteModeSerializer serialize:self] description];
}

@end


@implementation DBXFILESWriteModeSerializer 

+ (NSDictionary *)serialize:(DBXFILESWriteMode *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isAdd]) {
        jsonDict[@".tag"] = @"add";
    }
    else if ([valueObj isOverwrite]) {
        jsonDict[@".tag"] = @"overwrite";
    }
    else if ([valueObj isUpdate]) {
        jsonDict[@"update"] = valueObj.update;
        jsonDict[@".tag"] = @"update";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESWriteMode *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"add"]) {
        return [[DBXFILESWriteMode alloc] initWithAdd];
    }
    else if ([tag isEqualToString:@"overwrite"]) {
        return [[DBXFILESWriteMode alloc] initWithOverwrite];
    }
    else if ([tag isEqualToString:@"update"]) {
        NSString *update = valueDict[@"update"];
        return [[DBXFILESWriteMode alloc] initWithUpdate:update];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
