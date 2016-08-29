///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGFileMemberActionError.h"
#import "DBXSHARINGFileMemberRemoveActionResult.h"
#import "DBXSHARINGMemberAccessLevelResult.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGFileMemberRemoveActionResult 

@synthesize success = _success;
@synthesize memberError = _memberError;

- (instancetype)initWithSuccess:(DBXSHARINGMemberAccessLevelResult *)success {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGFileMemberRemoveActionResultSuccess;
        _success = success;
    }
    return self;
}

- (instancetype)initWithMemberError:(DBXSHARINGFileMemberActionError *)memberError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGFileMemberRemoveActionResultMemberError;
        _memberError = memberError;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGFileMemberRemoveActionResultOther;
    }
    return self;
}

- (BOOL)isSuccess {
    return _tag == DBXSHARINGFileMemberRemoveActionResultSuccess;
}

- (BOOL)isMemberError {
    return _tag == DBXSHARINGFileMemberRemoveActionResultMemberError;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGFileMemberRemoveActionResultOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGFileMemberRemoveActionResultSuccess:
           return @"DBXSHARINGFileMemberRemoveActionResultSuccess";
        case DBXSHARINGFileMemberRemoveActionResultMemberError:
           return @"DBXSHARINGFileMemberRemoveActionResultMemberError";
        case DBXSHARINGFileMemberRemoveActionResultOther:
           return @"DBXSHARINGFileMemberRemoveActionResultOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGMemberAccessLevelResult *)success {
    if (_tag != DBXSHARINGFileMemberRemoveActionResultSuccess) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGFileMemberRemoveActionResultSuccess`, but was %@.", [self getTagName]];
    }
    return _success;
}

- (DBXSHARINGFileMemberActionError *)memberError {
    if (_tag != DBXSHARINGFileMemberRemoveActionResultMemberError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGFileMemberRemoveActionResultMemberError`, but was %@.", [self getTagName]];
    }
    return _memberError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGFileMemberRemoveActionResultSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGFileMemberRemoveActionResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGFileMemberRemoveActionResultSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGFileMemberRemoveActionResultSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGFileMemberRemoveActionResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isSuccess]) {
        jsonDict = [[DBXSHARINGMemberAccessLevelResultSerializer serialize:valueObj.success] mutableCopy];
        jsonDict[@".tag"] = @"success";
    }
    else if ([valueObj isMemberError]) {
        jsonDict = [[DBXSHARINGFileMemberActionErrorSerializer serialize:valueObj.memberError] mutableCopy];
        jsonDict[@".tag"] = @"member_error";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGFileMemberRemoveActionResult *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"success"]) {
        DBXSHARINGMemberAccessLevelResult *success = [DBXSHARINGMemberAccessLevelResultSerializer deserialize:valueDict];
        return [[DBXSHARINGFileMemberRemoveActionResult alloc] initWithSuccess:success];
    }
    else if ([tag isEqualToString:@"member_error"]) {
        DBXSHARINGFileMemberActionError *memberError = [DBXSHARINGFileMemberActionErrorSerializer deserialize:valueDict[@"member_error"]];
        return [[DBXSHARINGFileMemberRemoveActionResult alloc] initWithMemberError:memberError];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGFileMemberRemoveActionResult alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
