///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMAddPropertyTemplateResult.h"

@implementation DBXTEAMAddPropertyTemplateResult 

- (instancetype)initWithTemplateId:(NSString *)templateId {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:@"(/|ptid:).*"](templateId);

    self = [super init];
    if (self != nil) {
        _templateId = templateId;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMAddPropertyTemplateResultSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMAddPropertyTemplateResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMAddPropertyTemplateResultSerializer serialize:self] description];
}

@end


@implementation DBXTEAMAddPropertyTemplateResultSerializer 

+ (NSDictionary *)serialize:(DBXTEAMAddPropertyTemplateResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"template_id"] = valueObj.templateId;

    return jsonDict;
}

+ (DBXTEAMAddPropertyTemplateResult *)deserialize:(NSDictionary *)valueDict {
    NSString *templateId = valueDict[@"template_id"];

    return [[DBXTEAMAddPropertyTemplateResult alloc] initWithTemplateId:templateId];
}

@end
