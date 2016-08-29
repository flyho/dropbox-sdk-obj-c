///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXUSERSIndividualSpaceAllocation.h"
#import "DBXUSERSSpaceAllocation.h"
#import "DBXUSERSTeamSpaceAllocation.h"

@implementation DBXUSERSSpaceAllocation 

@synthesize individual = _individual;
@synthesize team = _team;

- (instancetype)initWithIndividual:(DBXUSERSIndividualSpaceAllocation *)individual {
    self = [super init];
    if (self != nil) {
        _tag = DBXUSERSSpaceAllocationIndividual;
        _individual = individual;
    }
    return self;
}

- (instancetype)initWithTeam:(DBXUSERSTeamSpaceAllocation *)team {
    self = [super init];
    if (self != nil) {
        _tag = DBXUSERSSpaceAllocationTeam;
        _team = team;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXUSERSSpaceAllocationOther;
    }
    return self;
}

- (BOOL)isIndividual {
    return _tag == DBXUSERSSpaceAllocationIndividual;
}

- (BOOL)isTeam {
    return _tag == DBXUSERSSpaceAllocationTeam;
}

- (BOOL)isOther {
    return _tag == DBXUSERSSpaceAllocationOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXUSERSSpaceAllocationIndividual:
           return @"DBXUSERSSpaceAllocationIndividual";
        case DBXUSERSSpaceAllocationTeam:
           return @"DBXUSERSSpaceAllocationTeam";
        case DBXUSERSSpaceAllocationOther:
           return @"DBXUSERSSpaceAllocationOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXUSERSIndividualSpaceAllocation *)individual {
    if (_tag != DBXUSERSSpaceAllocationIndividual) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXUSERSSpaceAllocationIndividual`, but was %@.", [self getTagName]];
    }
    return _individual;
}

- (DBXUSERSTeamSpaceAllocation *)team {
    if (_tag != DBXUSERSSpaceAllocationTeam) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXUSERSSpaceAllocationTeam`, but was %@.", [self getTagName]];
    }
    return _team;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXUSERSSpaceAllocationSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXUSERSSpaceAllocationSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXUSERSSpaceAllocationSerializer serialize:self] description];
}

@end


@implementation DBXUSERSSpaceAllocationSerializer 

+ (NSDictionary *)serialize:(DBXUSERSSpaceAllocation *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isIndividual]) {
        jsonDict = [[DBXUSERSIndividualSpaceAllocationSerializer serialize:valueObj.individual] mutableCopy];
        jsonDict[@".tag"] = @"individual";
    }
    else if ([valueObj isTeam]) {
        jsonDict = [[DBXUSERSTeamSpaceAllocationSerializer serialize:valueObj.team] mutableCopy];
        jsonDict[@".tag"] = @"team";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXUSERSSpaceAllocation *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"individual"]) {
        DBXUSERSIndividualSpaceAllocation *individual = [DBXUSERSIndividualSpaceAllocationSerializer deserialize:valueDict];
        return [[DBXUSERSSpaceAllocation alloc] initWithIndividual:individual];
    }
    else if ([tag isEqualToString:@"team"]) {
        DBXUSERSTeamSpaceAllocation *team = [DBXUSERSTeamSpaceAllocationSerializer deserialize:valueDict];
        return [[DBXUSERSSpaceAllocation alloc] initWithTeam:team];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXUSERSSpaceAllocation alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
