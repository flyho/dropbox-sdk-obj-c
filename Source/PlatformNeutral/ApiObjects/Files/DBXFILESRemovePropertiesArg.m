///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESRemovePropertiesArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESRemovePropertiesArg 

- (instancetype)initWithPath:(NSString *)path propertyTemplateIds:(NSArray<NSString *> *)propertyTemplateIds {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"/(.|[\\r\\n])*|id:.*|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:[DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:@"(/|ptid:).*"]](propertyTemplateIds);

    self = [super init];
    if (self != nil) {
        _path = path;
        _propertyTemplateIds = propertyTemplateIds;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESRemovePropertiesArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESRemovePropertiesArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESRemovePropertiesArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESRemovePropertiesArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESRemovePropertiesArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    jsonDict[@"property_template_ids"] = [DBXArraySerializer serialize:valueObj.propertyTemplateIds withBlock:^id(id elem) { return elem; }];

    return jsonDict;
}

+ (DBXFILESRemovePropertiesArg *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    NSArray<NSString *> *propertyTemplateIds = [DBXArraySerializer deserialize:valueDict[@"property_template_ids"] withBlock:^id(id elem) { return elem; }];

    return [[DBXFILESRemovePropertiesArg alloc] initWithPath:path propertyTemplateIds:propertyTemplateIds];
}

@end
