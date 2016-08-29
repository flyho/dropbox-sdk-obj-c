///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFileMembersContinueError.h"
#import "DBXSHARINGSharingFileAccessError.h"
#import "DBXSHARINGSharingUserError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFileMembersContinueError 

@synthesize userError = _userError;
@synthesize accessError = _accessError;

- (instancetype)initWithUserError:(DBXSHARINGSharingUserError *)userError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersContinueErrorUserError;
        _userError = userError;
    }
    return self;
}

- (instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError *)accessError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersContinueErrorAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithInvalidCursor {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersContinueErrorInvalidCursor;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersContinueErrorOther;
    }
    return self;
}

- (BOOL)isUserError {
    return _tag == DBXSHARINGListFileMembersContinueErrorUserError;
}

- (BOOL)isAccessError {
    return _tag == DBXSHARINGListFileMembersContinueErrorAccessError;
}

- (BOOL)isInvalidCursor {
    return _tag == DBXSHARINGListFileMembersContinueErrorInvalidCursor;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGListFileMembersContinueErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGListFileMembersContinueErrorUserError:
           return @"DBXSHARINGListFileMembersContinueErrorUserError";
        case DBXSHARINGListFileMembersContinueErrorAccessError:
           return @"DBXSHARINGListFileMembersContinueErrorAccessError";
        case DBXSHARINGListFileMembersContinueErrorInvalidCursor:
           return @"DBXSHARINGListFileMembersContinueErrorInvalidCursor";
        case DBXSHARINGListFileMembersContinueErrorOther:
           return @"DBXSHARINGListFileMembersContinueErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGSharingUserError *)userError {
    if (_tag != DBXSHARINGListFileMembersContinueErrorUserError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGListFileMembersContinueErrorUserError`, but was %@.", [self getTagName]];
    }
    return _userError;
}

- (DBXSHARINGSharingFileAccessError *)accessError {
    if (_tag != DBXSHARINGListFileMembersContinueErrorAccessError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGListFileMembersContinueErrorAccessError`, but was %@.", [self getTagName]];
    }
    return _accessError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFileMembersContinueErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFileMembersContinueErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFileMembersContinueErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFileMembersContinueErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFileMembersContinueError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserError]) {
        jsonDict = [[DBXSHARINGSharingUserErrorSerializer serialize:valueObj.userError] mutableCopy];
        jsonDict[@".tag"] = @"user_error";
    }
    else if ([valueObj isAccessError]) {
        jsonDict = [[DBXSHARINGSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isInvalidCursor]) {
        jsonDict[@".tag"] = @"invalid_cursor";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGListFileMembersContinueError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_error"]) {
        DBXSHARINGSharingUserError *userError = [DBXSHARINGSharingUserErrorSerializer deserialize:valueDict[@"user_error"]];
        return [[DBXSHARINGListFileMembersContinueError alloc] initWithUserError:userError];
    }
    else if ([tag isEqualToString:@"access_error"]) {
        DBXSHARINGSharingFileAccessError *accessError = [DBXSHARINGSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DBXSHARINGListFileMembersContinueError alloc] initWithAccessError:accessError];
    }
    else if ([tag isEqualToString:@"invalid_cursor"]) {
        return [[DBXSHARINGListFileMembersContinueError alloc] initWithInvalidCursor];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGListFileMembersContinueError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
