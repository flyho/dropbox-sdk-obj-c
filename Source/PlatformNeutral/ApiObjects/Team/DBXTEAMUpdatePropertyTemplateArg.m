///
/// Auto-generated by Stone, do not modify.
///

#import "DBXPROPERTIESPropertyFieldTemplate.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMUpdatePropertyTemplateArg.h"

@implementation DBXTEAMUpdatePropertyTemplateArg 

- (instancetype)initWithTemplateId:(NSString *)templateId name:(NSString *)name description_:(NSString *)description_ addFields:(NSArray<DBXPROPERTIESPropertyFieldTemplate *> *)addFields {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:@"(/|ptid:).*"](templateId);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](addFields);

    self = [super init];
    if (self != nil) {
        _templateId = templateId;
        _name = name;
        _description_ = description_;
        _addFields = addFields;
    }
    return self;
}

- (instancetype)initWithTemplateId:(NSString *)templateId {
    return [self initWithTemplateId:templateId name:nil description_:nil addFields:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMUpdatePropertyTemplateArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMUpdatePropertyTemplateArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMUpdatePropertyTemplateArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMUpdatePropertyTemplateArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMUpdatePropertyTemplateArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"template_id"] = valueObj.templateId;
    if (valueObj.name) {
        jsonDict[@"name"] = valueObj.name;
    }
    if (valueObj.description_) {
        jsonDict[@"description"] = valueObj.description_;
    }
    if (valueObj.addFields) {
        jsonDict[@"add_fields"] = [DBXArraySerializer serialize:valueObj.addFields withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldTemplateSerializer serialize:elem]; }];
    }

    return jsonDict;
}

+ (DBXTEAMUpdatePropertyTemplateArg *)deserialize:(NSDictionary *)valueDict {
    NSString *templateId = valueDict[@"template_id"];
    NSString *name = valueDict[@"name"] ?: nil;
    NSString *description_ = valueDict[@"description"] ?: nil;
    NSArray<DBXPROPERTIESPropertyFieldTemplate *> *addFields = valueDict[@"add_fields"] ? [DBXArraySerializer deserialize:valueDict[@"add_fields"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldTemplateSerializer deserialize:elem]; }] : nil;

    return [[DBXTEAMUpdatePropertyTemplateArg alloc] initWithTemplateId:templateId name:name description_:description_ addFields:addFields];
}

@end