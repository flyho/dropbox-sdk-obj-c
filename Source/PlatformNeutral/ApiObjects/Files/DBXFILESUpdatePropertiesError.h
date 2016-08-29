///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookUpPropertiesError;
@class DBXFILESLookupError;
@class DBXFILESUpdatePropertiesError;

/// 
/// The `DBXFILESUpdatePropertiesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUpdatePropertiesError : NSObject <DBXSerializable> 

/// The `DBXFILESUpdatePropertiesErrorTag` enum type represents the possible tag
/// states that the `DBXFILESUpdatePropertiesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESUpdatePropertiesErrorTag) {
    /// Property template does not exist for given identifier.
    DBXFILESUpdatePropertiesErrorTemplateNotFound,

    /// You do not have the permissions to modify this property template.
    DBXFILESUpdatePropertiesErrorRestrictedContent,

    /// (no description).
    DBXFILESUpdatePropertiesErrorOther,

    /// (no description).
    DBXFILESUpdatePropertiesErrorPath,

    /// A field value in this property group is too large.
    DBXFILESUpdatePropertiesErrorPropertyFieldTooLarge,

    /// The property group specified does not conform to the property template.
    DBXFILESUpdatePropertiesErrorDoesNotFitTemplate,

    /// (no description).
    DBXFILESUpdatePropertiesErrorPropertyGroupLookup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESUpdatePropertiesErrorTag tag;

/// Property template does not exist for given identifier.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateNotFound;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookUpPropertiesError * _Nonnull propertyGroupLookup;

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

/// Initializes union class with tag state of `PropertyGroupLookup`.
- (nonnull instancetype)initWithPropertyGroupLookup:(DBXFILESLookUpPropertiesError * _Nonnull)propertyGroupLookup;

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
/// `PropertyGroupLookup`.
- (BOOL)isPropertyGroupLookup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESUpdatePropertiesError` union.
/// 
@interface DBXFILESUpdatePropertiesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUpdatePropertiesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUpdatePropertiesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESUpdatePropertiesError` object from
/// a json-compatible dictionary representation.
+ (DBXFILESUpdatePropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
