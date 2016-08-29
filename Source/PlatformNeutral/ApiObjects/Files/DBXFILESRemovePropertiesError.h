///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookUpPropertiesError;
@class DBXFILESLookupError;
@class DBXFILESRemovePropertiesError;

/// 
/// The `DBXFILESRemovePropertiesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESRemovePropertiesError : NSObject <DBXSerializable> 

/// The `DBXFILESRemovePropertiesErrorTag` enum type represents the possible tag
/// states that the `DBXFILESRemovePropertiesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESRemovePropertiesErrorTag) {
    /// Property template does not exist for given identifier.
    DBXFILESRemovePropertiesErrorTemplateNotFound,

    /// You do not have the permissions to modify this property template.
    DBXFILESRemovePropertiesErrorRestrictedContent,

    /// (no description).
    DBXFILESRemovePropertiesErrorOther,

    /// (no description).
    DBXFILESRemovePropertiesErrorPath,

    /// (no description).
    DBXFILESRemovePropertiesErrorPropertyGroupLookup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESRemovePropertiesErrorTag tag;

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
/// `PropertyGroupLookup`.
- (BOOL)isPropertyGroupLookup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESRemovePropertiesError` union.
/// 
@interface DBXFILESRemovePropertiesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESRemovePropertiesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESRemovePropertiesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESRemovePropertiesError` object from
/// a json-compatible dictionary representation.
+ (DBXFILESRemovePropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
