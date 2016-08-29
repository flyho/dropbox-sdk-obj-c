///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESLookupError.h"
#import "DBXFILESSearchError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESSearchError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESSearchErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESSearchErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESSearchErrorPath;
}

- (BOOL)isOther {
    return _tag == DBXFILESSearchErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESSearchErrorPath:
           return @"DBXFILESSearchErrorPath";
        case DBXFILESSearchErrorOther:
           return @"DBXFILESSearchErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (_tag != DBXFILESSearchErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESSearchErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESSearchErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESSearchErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESSearchErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESSearchErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESSearchError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESSearchError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESSearchError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESSearchError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
