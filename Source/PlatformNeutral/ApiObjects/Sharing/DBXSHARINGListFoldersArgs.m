///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGFolderAction.h"
#import "DBXSHARINGListFoldersArgs.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFoldersArgs 

- (instancetype)initWithLimit:(NSNumber *)limit actions:(NSArray<DBXSHARINGFolderAction *> *)actions {
    [DBXStoneValidators numericValidator:@(1) maxValue:@(1000)](limit ?: @(1000));
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](actions);

    self = [super init];
    if (self != nil) {
        _limit = limit ?: @(1000);
        _actions = actions;
    }
    return self;
}

- (instancetype)init {
    return [self initWithLimit:nil actions:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFoldersArgsSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFoldersArgsSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFoldersArgsSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFoldersArgsSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFoldersArgs *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"limit"] = valueObj.limit;
    if (valueObj.actions) {
        jsonDict[@"actions"] = [DBXArraySerializer serialize:valueObj.actions withBlock:^id(id elem) { return [DBXSHARINGFolderActionSerializer serialize:elem]; }];
    }

    return jsonDict;
}

+ (DBXSHARINGListFoldersArgs *)deserialize:(NSDictionary *)valueDict {
    NSNumber *limit = valueDict[@"limit"];
    NSArray<DBXSHARINGFolderAction *> *actions = valueDict[@"actions"] ? [DBXArraySerializer deserialize:valueDict[@"actions"] withBlock:^id(id elem) { return [DBXSHARINGFolderActionSerializer deserialize:elem]; }] : nil;

    return [[DBXSHARINGListFoldersArgs alloc] initWithLimit:limit actions:actions];
}

@end
