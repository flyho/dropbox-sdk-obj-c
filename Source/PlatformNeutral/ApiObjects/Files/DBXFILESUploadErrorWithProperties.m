///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESInvalidPropertyGroupError.h"
#import "DBXFILESUploadError.h"
#import "DBXFILESUploadErrorWithProperties.h"
#import "DBXFILESUploadWriteFailed.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadErrorWithProperties 

@synthesize path = _path;
@synthesize propertiesError = _propertiesError;

- (instancetype)initWithPath:(DBXFILESUploadWriteFailed *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadErrorWithPropertiesPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadErrorWithPropertiesOther;
    }
    return self;
}

- (instancetype)initWithPropertiesError:(DBXFILESInvalidPropertyGroupError *)propertiesError {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadErrorWithPropertiesPropertiesError;
        _propertiesError = propertiesError;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXFILESUploadErrorWithPropertiesPath;
}

- (BOOL)isOther {
    return _tag == DBXFILESUploadErrorWithPropertiesOther;
}

- (BOOL)isPropertiesError {
    return _tag == DBXFILESUploadErrorWithPropertiesPropertiesError;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESUploadErrorWithPropertiesPath:
           return @"DBXFILESUploadErrorWithPropertiesPath";
        case DBXFILESUploadErrorWithPropertiesOther:
           return @"DBXFILESUploadErrorWithPropertiesOther";
        case DBXFILESUploadErrorWithPropertiesPropertiesError:
           return @"DBXFILESUploadErrorWithPropertiesPropertiesError";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESUploadWriteFailed *)path {
    if (_tag != DBXFILESUploadErrorWithPropertiesPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESUploadErrorWithPropertiesPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

- (DBXFILESInvalidPropertyGroupError *)propertiesError {
    if (_tag != DBXFILESUploadErrorWithPropertiesPropertiesError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESUploadErrorWithPropertiesPropertiesError`, but was %@.", [self getTagName]];
    }
    return _propertiesError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESUploadErrorWithPropertiesSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadErrorWithPropertiesSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadErrorWithPropertiesSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadErrorWithPropertiesSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadErrorWithProperties *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESUploadWriteFailedSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else if ([valueObj isPropertiesError]) {
        jsonDict = [[DBXFILESInvalidPropertyGroupErrorSerializer serialize:valueObj.propertiesError] mutableCopy];
        jsonDict[@".tag"] = @"properties_error";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESUploadErrorWithProperties *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESUploadWriteFailed *path = [DBXFILESUploadWriteFailedSerializer deserialize:valueDict];
        return [[DBXFILESUploadErrorWithProperties alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESUploadErrorWithProperties alloc] initWithOther];
    }
    else if ([tag isEqualToString:@"properties_error"]) {
        DBXFILESInvalidPropertyGroupError *propertiesError = [DBXFILESInvalidPropertyGroupErrorSerializer deserialize:valueDict[@"properties_error"]];
        return [[DBXFILESUploadErrorWithProperties alloc] initWithPropertiesError:propertiesError];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
