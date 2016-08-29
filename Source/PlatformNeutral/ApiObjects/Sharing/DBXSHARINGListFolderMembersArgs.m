///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFolderMembersArgs.h"
#import "DBXSHARINGListFolderMembersCursorArg.h"
#import "DBXSHARINGMemberAction.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFolderMembersArgs 

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId actions:(NSArray<DBXSHARINGMemberAction *> *)actions limit:(NSNumber *)limit {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](sharedFolderId);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](actions);
    [DBXStoneValidators numericValidator:@(1) maxValue:@(1000)](limit ?: @(1000));

    self = [super initWithActions:actions limit:limit];
    if (self != nil) {
        _sharedFolderId = sharedFolderId;
    }
    return self;
}

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId {
    return [self initWithSharedFolderId:sharedFolderId actions:nil limit:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFolderMembersArgsSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFolderMembersArgsSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFolderMembersArgsSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFolderMembersArgsSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFolderMembersArgs *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
    if (valueObj.actions) {
        jsonDict[@"actions"] = [DBXArraySerializer serialize:valueObj.actions withBlock:^id(id elem) { return [DBXSHARINGMemberActionSerializer serialize:elem]; }];
    }
    jsonDict[@"limit"] = valueObj.limit;

    return jsonDict;
}

+ (DBXSHARINGListFolderMembersArgs *)deserialize:(NSDictionary *)valueDict {
    NSString *sharedFolderId = valueDict[@"shared_folder_id"];
    NSArray<DBXSHARINGMemberAction *> *actions = valueDict[@"actions"] ? [DBXArraySerializer deserialize:valueDict[@"actions"] withBlock:^id(id elem) { return [DBXSHARINGMemberActionSerializer deserialize:elem]; }] : nil;
    NSNumber *limit = valueDict[@"limit"];

    return [[DBXSHARINGListFolderMembersArgs alloc] initWithSharedFolderId:sharedFolderId actions:actions limit:limit];
}

@end
