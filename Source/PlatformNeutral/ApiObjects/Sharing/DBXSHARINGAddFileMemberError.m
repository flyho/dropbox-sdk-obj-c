///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAddFileMemberError.h"
#import "DBXSHARINGSharingFileAccessError.h"
#import "DBXSHARINGSharingUserError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGAddFileMemberError 

@synthesize userError = _userError;
@synthesize accessError = _accessError;

- (instancetype)initWithUserError:(DBXSHARINGSharingUserError *)userError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGAddFileMemberErrorUserError;
        _userError = userError;
    }
    return self;
}

- (instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError *)accessError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGAddFileMemberErrorAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithRateLimit {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGAddFileMemberErrorRateLimit;
    }
    return self;
}

- (instancetype)initWithInvalidComment {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGAddFileMemberErrorInvalidComment;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGAddFileMemberErrorOther;
    }
    return self;
}

- (BOOL)isUserError {
    return _tag == DBXSHARINGAddFileMemberErrorUserError;
}

- (BOOL)isAccessError {
    return _tag == DBXSHARINGAddFileMemberErrorAccessError;
}

- (BOOL)isRateLimit {
    return _tag == DBXSHARINGAddFileMemberErrorRateLimit;
}

- (BOOL)isInvalidComment {
    return _tag == DBXSHARINGAddFileMemberErrorInvalidComment;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGAddFileMemberErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGAddFileMemberErrorUserError:
           return @"DBXSHARINGAddFileMemberErrorUserError";
        case DBXSHARINGAddFileMemberErrorAccessError:
           return @"DBXSHARINGAddFileMemberErrorAccessError";
        case DBXSHARINGAddFileMemberErrorRateLimit:
           return @"DBXSHARINGAddFileMemberErrorRateLimit";
        case DBXSHARINGAddFileMemberErrorInvalidComment:
           return @"DBXSHARINGAddFileMemberErrorInvalidComment";
        case DBXSHARINGAddFileMemberErrorOther:
           return @"DBXSHARINGAddFileMemberErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGSharingUserError *)userError {
    if (_tag != DBXSHARINGAddFileMemberErrorUserError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGAddFileMemberErrorUserError`, but was %@.", [self getTagName]];
    }
    return _userError;
}

- (DBXSHARINGSharingFileAccessError *)accessError {
    if (_tag != DBXSHARINGAddFileMemberErrorAccessError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGAddFileMemberErrorAccessError`, but was %@.", [self getTagName]];
    }
    return _accessError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGAddFileMemberErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGAddFileMemberErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGAddFileMemberErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGAddFileMemberErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGAddFileMemberError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserError]) {
        jsonDict = [[DBXSHARINGSharingUserErrorSerializer serialize:valueObj.userError] mutableCopy];
        jsonDict[@".tag"] = @"user_error";
    }
    else if ([valueObj isAccessError]) {
        jsonDict = [[DBXSHARINGSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isRateLimit]) {
        jsonDict[@".tag"] = @"rate_limit";
    }
    else if ([valueObj isInvalidComment]) {
        jsonDict[@".tag"] = @"invalid_comment";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGAddFileMemberError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_error"]) {
        DBXSHARINGSharingUserError *userError = [DBXSHARINGSharingUserErrorSerializer deserialize:valueDict[@"user_error"]];
        return [[DBXSHARINGAddFileMemberError alloc] initWithUserError:userError];
    }
    else if ([tag isEqualToString:@"access_error"]) {
        DBXSHARINGSharingFileAccessError *accessError = [DBXSHARINGSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DBXSHARINGAddFileMemberError alloc] initWithAccessError:accessError];
    }
    else if ([tag isEqualToString:@"rate_limit"]) {
        return [[DBXSHARINGAddFileMemberError alloc] initWithRateLimit];
    }
    else if ([tag isEqualToString:@"invalid_comment"]) {
        return [[DBXSHARINGAddFileMemberError alloc] initWithInvalidComment];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGAddFileMemberError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
