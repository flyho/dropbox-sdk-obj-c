///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESUploadError.h"
#import "DBXFILESUploadWriteFailed.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadError 

@synthesize path = _path;

- (instancetype)initWithPath:(DBXFILESUploadWriteFailed *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadErrorOther;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESUploadErrorPath;
}

- (BOOL)isOther {
    return _tag == DBXFILESUploadErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESUploadErrorPath:
           return @"DBXFILESUploadErrorPath";
        case DBXFILESUploadErrorOther:
           return @"DBXFILESUploadErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESUploadWriteFailed *)path {
    if (_tag != DBXFILESUploadErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESUploadErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESUploadErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESUploadWriteFailedSerializer serialize:valueObj.path] mutableCopy];
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

+ (DBXFILESUploadError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESUploadWriteFailed *path = [DBXFILESUploadWriteFailedSerializer deserialize:valueDict];
        return [[DBXFILESUploadError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESUploadError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
