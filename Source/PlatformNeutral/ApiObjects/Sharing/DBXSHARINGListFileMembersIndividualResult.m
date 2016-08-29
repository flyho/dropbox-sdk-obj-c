///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFileMembersCountResult.h"
#import "DBXSHARINGListFileMembersIndividualResult.h"
#import "DBXSHARINGSharingFileAccessError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFileMembersIndividualResult 

@synthesize result = _result;
@synthesize accessError = _accessError;

- (instancetype)initWithResult:(DBXSHARINGListFileMembersCountResult *)result {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersIndividualResultResult;
        _result = result;
    }
    return self;
}

- (instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError *)accessError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersIndividualResultAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGListFileMembersIndividualResultOther;
    }
    return self;
}

- (BOOL)isResult {
    return _tag == DBXSHARINGListFileMembersIndividualResultResult;
}

- (BOOL)isAccessError {
    return _tag == DBXSHARINGListFileMembersIndividualResultAccessError;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGListFileMembersIndividualResultOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGListFileMembersIndividualResultResult:
           return @"DBXSHARINGListFileMembersIndividualResultResult";
        case DBXSHARINGListFileMembersIndividualResultAccessError:
           return @"DBXSHARINGListFileMembersIndividualResultAccessError";
        case DBXSHARINGListFileMembersIndividualResultOther:
           return @"DBXSHARINGListFileMembersIndividualResultOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGListFileMembersCountResult *)result {
    if (_tag != DBXSHARINGListFileMembersIndividualResultResult) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGListFileMembersIndividualResultResult`, but was %@.", [self getTagName]];
    }
    return _result;
}

- (DBXSHARINGSharingFileAccessError *)accessError {
    if (_tag != DBXSHARINGListFileMembersIndividualResultAccessError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGListFileMembersIndividualResultAccessError`, but was %@.", [self getTagName]];
    }
    return _accessError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFileMembersIndividualResultSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFileMembersIndividualResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFileMembersIndividualResultSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFileMembersIndividualResultSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFileMembersIndividualResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isResult]) {
        jsonDict = [[DBXSHARINGListFileMembersCountResultSerializer serialize:valueObj.result] mutableCopy];
        jsonDict[@".tag"] = @"result";
    }
    else if ([valueObj isAccessError]) {
        jsonDict = [[DBXSHARINGSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGListFileMembersIndividualResult *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"result"]) {
        DBXSHARINGListFileMembersCountResult *result = [DBXSHARINGListFileMembersCountResultSerializer deserialize:valueDict];
        return [[DBXSHARINGListFileMembersIndividualResult alloc] initWithResult:result];
    }
    else if ([tag isEqualToString:@"access_error"]) {
        DBXSHARINGSharingFileAccessError *accessError = [DBXSHARINGSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DBXSHARINGListFileMembersIndividualResult alloc] initWithAccessError:accessError];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGListFileMembersIndividualResult alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
