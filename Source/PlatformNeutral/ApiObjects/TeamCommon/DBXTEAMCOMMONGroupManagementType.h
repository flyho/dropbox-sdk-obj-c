///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMCOMMONGroupManagementType;

/// 
/// The `DBXTEAMCOMMONGroupManagementType` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The group type determines how a group is managed.
/// 
@interface DBXTEAMCOMMONGroupManagementType : NSObject <DBXSerializable> 

/// The `DBXTEAMCOMMONGroupManagementTypeTag` enum type represents the possible
/// tag states that the `DBXTEAMCOMMONGroupManagementType` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMCOMMONGroupManagementTypeTag) {
    /// A group which is managed by team admins only.
    DBXTEAMCOMMONGroupManagementTypeCompanyManaged,

    /// A group which is managed by selected users.
    DBXTEAMCOMMONGroupManagementTypeUserManaged,

    /// (no description).
    DBXTEAMCOMMONGroupManagementTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMCOMMONGroupManagementTypeTag tag;

/// Initializes union class with tag state of `CompanyManaged`.
- (nonnull instancetype)initWithCompanyManaged;

/// Initializes union class with tag state of `UserManaged`.
- (nonnull instancetype)initWithUserManaged;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `CompanyManaged`.
- (BOOL)isCompanyManaged;

/// Returns whether the union's current tag state has value `UserManaged`.
- (BOOL)isUserManaged;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMCOMMONGroupManagementType` union.
/// 
@interface DBXTEAMCOMMONGroupManagementTypeSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMCOMMONGroupManagementType` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMCOMMONGroupManagementType * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMCOMMONGroupManagementType` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMCOMMONGroupManagementType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end