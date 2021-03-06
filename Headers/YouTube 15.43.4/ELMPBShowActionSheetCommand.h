//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTELMCommandHandler-Protocol.h>

@class ELMPBElement, NSMutableArray, NSString;

@interface ELMPBShowActionSheetCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (void)measureViewSize:(id)arg1;
- (void)showActionSheet:(id)arg1 footerView:(id)arg2 headerView:(id)arg3 listOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)executeWithCommandContext:(id)arg1 gimme:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) ELMPBElement *footer; // @dynamic footer;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ELMPBElement *header; // @dynamic header;
@property(retain, nonatomic) NSMutableArray *listOptionArray; // @dynamic listOptionArray;
@property(readonly, nonatomic) unsigned long long listOptionArray_Count; // @dynamic listOptionArray_Count;
@property(readonly) Class superclass;

@end

