//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTELMCommandHandler-Protocol.h"

@class ELMPBElement, NSString;

@interface ELMPBShowBottomSheetCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (void)autoDismissBottomSheet:(double)arg1 gimme:(id)arg2;
- (void)showPersistentBottomSheetWithContainerViewAutoDismiss:(id)arg1 promise:(id)arg2 gimme:(id)arg3 duration:(double)arg4;
- (void)showModalBottomSheetWithPresentationView:(id)arg1 containerView:(id)arg2 promise:(id)arg3;
- (void)showPersistentBottomSheetWithContainerView:(id)arg1 promise:(id)arg2 gimme:(id)arg3;
- (id)executeWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 gimme:(id)arg4;

// Remaining properties
@property(nonatomic) unsigned int containerBackgroundColor; // @dynamic containerBackgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double durationSeconds; // @dynamic durationSeconds;
@property(retain, nonatomic) ELMPBElement *element; // @dynamic element;
@property(nonatomic) _Bool hasContainerBackgroundColor; // @dynamic hasContainerBackgroundColor;
@property(nonatomic) _Bool hasDurationSeconds; // @dynamic hasDurationSeconds;
@property(nonatomic) _Bool hasElement; // @dynamic hasElement;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(readonly) unsigned long long hash;
@property(nonatomic) int style; // @dynamic style;
@property(readonly) Class superclass;

@end

