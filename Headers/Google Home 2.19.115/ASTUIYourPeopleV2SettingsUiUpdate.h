//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIAnnotationDeletion, ASTUIAnnotationUpdate, NSMutableArray;

@interface ASTUIYourPeopleV2SettingsUiUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTUIAnnotationDeletion *annotationDeletion; // @dynamic annotationDeletion;
@property(retain, nonatomic) ASTUIAnnotationUpdate *annotationUpdate; // @dynamic annotationUpdate;
@property(retain, nonatomic) NSMutableArray *operationArray; // @dynamic operationArray;
@property(readonly, nonatomic) unsigned long long operationArray_Count; // @dynamic operationArray_Count;
@property(readonly, nonatomic) int updateOperationOneOfCase; // @dynamic updateOperationOneOfCase;

@end

