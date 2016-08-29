///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXUSERSAccountType;

/// 
/// The `DBXUSERSAccountType` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// What type of account this user has.
/// 
@interface DBXUSERSAccountType : NSObject <DBXSerializable> 

/// The `DBXUSERSAccountTypeTag` enum type represents the possible tag states
/// that the `DBXUSERSAccountType` union can exist in.
typedef NS_ENUM(NSInteger, DBXUSERSAccountTypeTag) {
    /// The basic account type.
    DBXUSERSAccountTypeBasic,

    /// The Dropbox Pro account type.
    DBXUSERSAccountTypePro,

    /// The Dropbox Business account type.
    DBXUSERSAccountTypeBusiness,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXUSERSAccountTypeTag tag;

/// Initializes union class with tag state of `Basic`.
- (nonnull instancetype)initWithBasic;

/// Initializes union class with tag state of `Pro`.
- (nonnull instancetype)initWithPro;

/// Initializes union class with tag state of `Business`.
- (nonnull instancetype)initWithBusiness;

/// Returns whether the union's current tag state has value `Basic`.
- (BOOL)isBasic;

/// Returns whether the union's current tag state has value `Pro`.
- (BOOL)isPro;

/// Returns whether the union's current tag state has value `Business`.
- (BOOL)isBusiness;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXUSERSAccountType` union.
/// 
@interface DBXUSERSAccountTypeSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXUSERSAccountType` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXUSERSAccountType * _Nonnull)obj;

/// Returns an instantiation of the `DBXUSERSAccountType` object from a
/// json-compatible dictionary representation.
+ (DBXUSERSAccountType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end