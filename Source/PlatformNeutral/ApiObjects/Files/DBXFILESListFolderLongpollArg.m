///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESListFolderLongpollArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESListFolderLongpollArg 

- (instancetype)initWithCursor:(NSString *)cursor timeout:(NSNumber *)timeout {
    [DBXStoneValidators stringValidator:@(1) maxLength:nil pattern:nil](cursor);
    [DBXStoneValidators numericValidator:@(30) maxValue:@(480)](timeout ?: @(30));

    self = [super init];
    if (self != nil) {
        _cursor = cursor;
        _timeout = timeout ?: @(30);
    }
    return self;
}

- (instancetype)initWithCursor:(NSString *)cursor {
    return [self initWithCursor:cursor timeout:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESListFolderLongpollArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESListFolderLongpollArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESListFolderLongpollArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESListFolderLongpollArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESListFolderLongpollArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"cursor"] = valueObj.cursor;
    jsonDict[@"timeout"] = valueObj.timeout;

    return jsonDict;
}

+ (DBXFILESListFolderLongpollArg *)deserialize:(NSDictionary *)valueDict {
    NSString *cursor = valueDict[@"cursor"];
    NSNumber *timeout = valueDict[@"timeout"];

    return [[DBXFILESListFolderLongpollArg alloc] initWithCursor:cursor timeout:timeout];
}

@end