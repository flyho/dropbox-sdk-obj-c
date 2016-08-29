///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookUpPropertiesError;

/// 
/// The `DBXFILESLookUpPropertiesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESLookUpPropertiesError : NSObject <DBXSerializable> 

/// The `DBXFILESLookUpPropertiesErrorTag` enum type represents the possible tag
/// states that the `DBXFILESLookUpPropertiesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESLookUpPropertiesErrorTag) {
    /// This property group does not exist for this file.
    DBXFILESLookUpPropertiesErrorPropertyGroupNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESLookUpPropertiesErrorTag tag;

/// Initializes union class with tag state of `PropertyGroupNotFound`.
- (nonnull instancetype)initWithPropertyGroupNotFound;

/// Returns whether the union's current tag state has value
/// `PropertyGroupNotFound`.
- (BOOL)isPropertyGroupNotFound;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESLookUpPropertiesError` union.
/// 
@interface DBXFILESLookUpPropertiesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESLookUpPropertiesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESLookUpPropertiesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESLookUpPropertiesError` object from
/// a json-compatible dictionary representation.
+ (DBXFILESLookUpPropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
