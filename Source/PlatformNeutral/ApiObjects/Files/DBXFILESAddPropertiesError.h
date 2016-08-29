///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESAddPropertiesError;
@class DBXFILESLookupError;

/// 
/// The `DBXFILESAddPropertiesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESAddPropertiesError : NSObject <DBXSerializable> 

/// The `DBXFILESAddPropertiesErrorTag` enum type represents the possible tag
/// states that the `DBXFILESAddPropertiesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESAddPropertiesErrorTag) {
    /// Property template does not exist for given identifier.
    DBXFILESAddPropertiesErrorTemplateNotFound,

    /// You do not have the permissions to modify this property template.
    DBXFILESAddPropertiesErrorRestrictedContent,

    /// (no description).
    DBXFILESAddPropertiesErrorOther,

    /// (no description).
    DBXFILESAddPropertiesErrorPath,

    /// A field value in this property group is too large.
    DBXFILESAddPropertiesErrorPropertyFieldTooLarge,

    /// The property group specified does not conform to the property template.
    DBXFILESAddPropertiesErrorDoesNotFitTemplate,

    /// This property group already exists for this file.
    DBXFILESAddPropertiesErrorPropertyGroupAlreadyExists,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESAddPropertiesErrorTag tag;

/// Property template does not exist for given identifier.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateNotFound;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// Initializes union class with tag state of `TemplateNotFound`.
- (nonnull instancetype)initWithTemplateNotFound:(NSString * _Nonnull)templateNotFound;

/// Initializes union class with tag state of `RestrictedContent`.
- (nonnull instancetype)initWithRestrictedContent;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// Initializes union class with tag state of `PropertyFieldTooLarge`.
- (nonnull instancetype)initWithPropertyFieldTooLarge;

/// Initializes union class with tag state of `DoesNotFitTemplate`.
- (nonnull instancetype)initWithDoesNotFitTemplate;

/// Initializes union class with tag state of `PropertyGroupAlreadyExists`.
- (nonnull instancetype)initWithPropertyGroupAlreadyExists;

/// Returns whether the union's current tag state has value `TemplateNotFound`.
- (BOOL)isTemplateNotFound;

/// Returns whether the union's current tag state has value `RestrictedContent`.
- (BOOL)isRestrictedContent;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value
/// `PropertyFieldTooLarge`.
- (BOOL)isPropertyFieldTooLarge;

/// Returns whether the union's current tag state has value
/// `DoesNotFitTemplate`.
- (BOOL)isDoesNotFitTemplate;

/// Returns whether the union's current tag state has value
/// `PropertyGroupAlreadyExists`.
- (BOOL)isPropertyGroupAlreadyExists;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESAddPropertiesError` union.
/// 
@interface DBXFILESAddPropertiesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESAddPropertiesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESAddPropertiesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESAddPropertiesError` object from a
/// json-compatible dictionary representation.
+ (DBXFILESAddPropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
