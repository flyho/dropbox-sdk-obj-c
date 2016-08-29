///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESDownloadError.h"
#import "DBXFILESLookupError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESDownloadError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESDownloadErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESDownloadErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESDownloadErrorPath;
}

- (BOOL)isOther {
    return _tag == DBXFILESDownloadErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESDownloadErrorPath:
           return @"DBXFILESDownloadErrorPath";
        case DBXFILESDownloadErrorOther:
           return @"DBXFILESDownloadErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (_tag != DBXFILESDownloadErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESDownloadErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESDownloadErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESDownloadErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESDownloadErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESDownloadErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESDownloadError *)valueObj {
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

+ (DBXFILESDownloadError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESDownloadError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESDownloadError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
