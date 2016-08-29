///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMPOLICIESSharedFolderJoinPolicy;
@class DBXTEAMPOLICIESSharedFolderMemberPolicy;
@class DBXTEAMPOLICIESSharedLinkCreatePolicy;
@class DBXTEAMPOLICIESTeamSharingPolicies;

/// 
/// The `DBXTEAMPOLICIESTeamSharingPolicies` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Policies governing sharing within and outside of the team.
/// 
@interface DBXTEAMPOLICIESTeamSharingPolicies : NSObject <DBXSerializable> 

/// Who can join folders shared by team members.
@property (nonatomic, readonly) DBXTEAMPOLICIESSharedFolderMemberPolicy * _Nonnull sharedFolderMemberPolicy;

/// Which shared folders team members can join.
@property (nonatomic, readonly) DBXTEAMPOLICIESSharedFolderJoinPolicy * _Nonnull sharedFolderJoinPolicy;

/// What is the visibility of newly created shared links.
@property (nonatomic, readonly) DBXTEAMPOLICIESSharedLinkCreatePolicy * _Nonnull sharedLinkCreatePolicy;

/// Full constructor for the `TeamSharingPolicies` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithSharedFolderMemberPolicy:(DBXTEAMPOLICIESSharedFolderMemberPolicy * _Nonnull)sharedFolderMemberPolicy sharedFolderJoinPolicy:(DBXTEAMPOLICIESSharedFolderJoinPolicy * _Nonnull)sharedFolderJoinPolicy sharedLinkCreatePolicy:(DBXTEAMPOLICIESSharedLinkCreatePolicy * _Nonnull)sharedLinkCreatePolicy;

@end


/// 
/// The serialization class for the `DBXTEAMPOLICIESTeamSharingPolicies` struct.
/// 
@interface DBXTEAMPOLICIESTeamSharingPoliciesSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMPOLICIESTeamSharingPolicies` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMPOLICIESTeamSharingPolicies * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMPOLICIESTeamSharingPolicies` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMPOLICIESTeamSharingPolicies * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end