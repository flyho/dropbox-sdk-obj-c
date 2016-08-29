///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESLookupError.h"
#import "DBXSHARINGCreateSharedLinkError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGCreateSharedLinkError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGCreateSharedLinkErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGCreateSharedLinkErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXSHARINGCreateSharedLinkErrorPath;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGCreateSharedLinkErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGCreateSharedLinkErrorPath:
           return @"DBXSHARINGCreateSharedLinkErrorPath";
        case DBXSHARINGCreateSharedLinkErrorOther:
           return @"DBXSHARINGCreateSharedLinkErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (_tag != DBXSHARINGCreateSharedLinkErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGCreateSharedLinkErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGCreateSharedLinkErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGCreateSharedLinkErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGCreateSharedLinkErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGCreateSharedLinkErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGCreateSharedLinkError *)valueObj {
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

+ (DBXSHARINGCreateSharedLinkError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXSHARINGCreateSharedLinkError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGCreateSharedLinkError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
