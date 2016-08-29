///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXPROPERTIESPropertyTemplateError;

/// 
/// The `DBXPROPERTIESPropertyTemplateError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXPROPERTIESPropertyTemplateError : NSObject <DBXSerializable> 

/// The `DBXPROPERTIESPropertyTemplateErrorTag` enum type represents the
/// possible tag states that the `DBXPROPERTIESPropertyTemplateError` union can
/// exist in.
typedef NS_ENUM(NSInteger, DBXPROPERTIESPropertyTemplateErrorTag) {
    /// Property template does not exist for given identifier.
    DBXPROPERTIESPropertyTemplateErrorTemplateNotFound,

    /// You do not have the permissions to modify this property template.
    DBXPROPERTIESPropertyTemplateErrorRestrictedContent,

    /// (no description).
    DBXPROPERTIESPropertyTemplateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXPROPERTIESPropertyTemplateErrorTag tag;

/// Property template does not exist for given identifier.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateNotFound;

/// Initializes union class with tag state of `TemplateNotFound`.
- (nonnull instancetype)initWithTemplateNotFound:(NSString * _Nonnull)templateNotFound;

/// Initializes union class with tag state of `RestrictedContent`.
- (nonnull instancetype)initWithRestrictedContent;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `TemplateNotFound`.
- (BOOL)isTemplateNotFound;

/// Returns whether the union's current tag state has value `RestrictedContent`.
- (BOOL)isRestrictedContent;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXPROPERTIESPropertyTemplateError` union.
/// 
@interface DBXPROPERTIESPropertyTemplateErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXPROPERTIESPropertyTemplateError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXPROPERTIESPropertyTemplateError * _Nonnull)obj;

/// Returns an instantiation of the `DBXPROPERTIESPropertyTemplateError` object
/// from a json-compatible dictionary representation.
+ (DBXPROPERTIESPropertyTemplateError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
