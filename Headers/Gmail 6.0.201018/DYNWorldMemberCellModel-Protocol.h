//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewCellModel-Protocol.h"

@class NSString;
@protocol DYNMember, GIPAccountID;

@protocol DYNWorldMemberCellModel <DYNCollectionViewCellModel>
@property(readonly, nonatomic) NSString *emphasizedText;
@property(readonly, nonatomic) _Bool shouldShowEmailOnly;
@property(readonly, nonatomic) _Bool isInteractionEnabled;
@property(readonly, nonatomic) _Bool showExternalLabel;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@property(readonly, nonatomic) id <DYNMember> member;
@end

