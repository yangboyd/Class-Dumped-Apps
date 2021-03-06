//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGConfidentialityArgs, DBSHARINGListFolderMembersCursorArg, NSArray, NSNumber, NSString;

@interface DBSHARINGValidateFolderPathArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_path;
    DBSHARINGConfidentialityArgs *_confidentiality;
    NSArray *_actions;
    DBSHARINGListFolderMembersCursorArg *_listMembersArg;
    NSNumber *_isContainingPath;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *isContainingPath; // @synthesize isContainingPath=_isContainingPath;
@property(readonly, nonatomic) DBSHARINGListFolderMembersCursorArg *listMembersArg; // @synthesize listMembersArg=_listMembersArg;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) DBSHARINGConfidentialityArgs *confidentiality; // @synthesize confidentiality=_confidentiality;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)isEqualToValidateFolderPathArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 confidentiality:(id)arg2 actions:(id)arg3 listMembersArg:(id)arg4 isContainingPath:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

