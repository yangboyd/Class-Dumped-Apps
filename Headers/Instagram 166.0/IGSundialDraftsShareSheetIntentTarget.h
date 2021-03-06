//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class IGSundialComposition, NSString, UIImage;
@protocol IGSundialDraftsShareSheetViewControllerDelegate;

@interface IGSundialDraftsShareSheetIntentTarget : NSObject <FBIntentTarget>
{
    IGSundialComposition *_draftComposition;
    id <IGSundialDraftsShareSheetViewControllerDelegate> _delegate;
    UIImage *_previewImage;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) id <IGSundialDraftsShareSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSundialComposition *draftComposition; // @synthesize draftComposition=_draftComposition;
- (id)initWithDraftComposition:(id)arg1 delegate:(id)arg2 previewImage:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

