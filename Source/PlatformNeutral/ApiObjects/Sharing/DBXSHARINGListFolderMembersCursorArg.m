///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFolderMembersCursorArg.h"
#import "DBXSHARINGMemberAction.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFolderMembersCursorArg 

- (instancetype)initWithActions:(NSArray<DBXSHARINGMemberAction *> *)actions limit:(NSNumber *)limit {
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](actions);
    [DBXStoneValidators numericValidator:@(1) maxValue:@(1000)](limit ?: @(1000));

    self = [super init];
    if (self != nil) {
        _actions = actions;
        _limit = limit ?: @(1000);
    }
    return self;
}

- (instancetype)init {
    return [self initWithActions:nil limit:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFolderMembersCursorArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFolderMembersCursorArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFolderMembersCursorArgSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFolderMembersCursorArgSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFolderMembersCursorArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if (valueObj.actions) {
        jsonDict[@"actions"] = [DBXArraySerializer serialize:valueObj.actions withBlock:^id(id elem) { return [DBXSHARINGMemberActionSerializer serialize:elem]; }];
    }
    jsonDict[@"limit"] = valueObj.limit;

    return jsonDict;
}

+ (DBXSHARINGListFolderMembersCursorArg *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXSHARINGMemberAction *> *actions = valueDict[@"actions"] ? [DBXArraySerializer deserialize:valueDict[@"actions"] withBlock:^id(id elem) { return [DBXSHARINGMemberActionSerializer deserialize:elem]; }] : nil;
    NSNumber *limit = valueDict[@"limit"];

    return [[DBXSHARINGListFolderMembersCursorArg alloc] initWithActions:actions limit:limit];
}

@end
