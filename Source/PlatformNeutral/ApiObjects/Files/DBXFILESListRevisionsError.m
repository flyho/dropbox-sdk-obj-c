///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESListRevisionsError.h"
#import "DBXFILESLookupError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESListRevisionsError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESListRevisionsErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESListRevisionsErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESListRevisionsErrorPath;
}

- (BOOL)isOther {
    return _tag == DBXFILESListRevisionsErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESListRevisionsErrorPath:
           return @"DBXFILESListRevisionsErrorPath";
        case DBXFILESListRevisionsErrorOther:
           return @"DBXFILESListRevisionsErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (_tag != DBXFILESListRevisionsErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESListRevisionsErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESListRevisionsErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESListRevisionsErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESListRevisionsErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESListRevisionsErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESListRevisionsError *)valueObj {
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

+ (DBXFILESListRevisionsError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESListRevisionsError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESListRevisionsError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
