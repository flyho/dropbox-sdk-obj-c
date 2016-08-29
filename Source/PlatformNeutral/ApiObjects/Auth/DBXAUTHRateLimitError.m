///
/// Auto-generated by Stone, do not modify.
///

#import "DBXAUTHRateLimitError.h"
#import "DBXAUTHRateLimitReason.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXAUTHRateLimitError 

- (instancetype)initWithReason:(DBXAUTHRateLimitReason *)reason retryAfter:(NSNumber *)retryAfter {

    self = [super init];
    if (self != nil) {
        _reason = reason;
        _retryAfter = retryAfter ?: @(1);
    }
    return self;
}

- (instancetype)initWithReason:(DBXAUTHRateLimitReason *)reason {
    return [self initWithReason:reason retryAfter:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXAUTHRateLimitErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXAUTHRateLimitErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXAUTHRateLimitErrorSerializer serialize:self] description];
}

@end


@implementation DBXAUTHRateLimitErrorSerializer 

+ (NSDictionary *)serialize:(DBXAUTHRateLimitError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"reason"] = [DBXAUTHRateLimitReasonSerializer serialize:valueObj.reason];
    jsonDict[@"retry_after"] = valueObj.retryAfter;

    return jsonDict;
}

+ (DBXAUTHRateLimitError *)deserialize:(NSDictionary *)valueDict {
    DBXAUTHRateLimitReason *reason = [DBXAUTHRateLimitReasonSerializer deserialize:valueDict[@"reason"]];
    NSNumber *retryAfter = valueDict[@"retry_after"];

    return [[DBXAUTHRateLimitError alloc] initWithReason:reason retryAfter:retryAfter];
}

@end
