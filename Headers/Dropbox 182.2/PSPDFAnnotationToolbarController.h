//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFFlexibleToolbarController.h>

#import <PSPDFKitUI/PSPDFFlexibleToolbarContainerDelegate-Protocol.h>

@class NSString, PSPDFAnnotationToolbar, PSPDFMulticastDelegate;
@protocol PSPDFFlexibleToolbarContainerDelegate;

@interface PSPDFAnnotationToolbarController : PSPDFFlexibleToolbarController <PSPDFFlexibleToolbarContainerDelegate>
{
    id <PSPDFFlexibleToolbarContainerDelegate> _delegate;
    PSPDFMulticastDelegate *_multicastDelegate;
}

@property(retain, nonatomic) PSPDFMulticastDelegate *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(nonatomic) __weak id <PSPDFFlexibleToolbarContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appearanceModeDidChange:(id)arg1;
- (void)updateMuticastDelegate;
- (void)setFlexibleToolbarContainer:(id)arg1;
- (_Bool)hideToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)showToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIsToolbarVisible:(_Bool)arg1 willChangeWithAnimation:(_Bool)arg2;
@property(readonly, nonatomic) PSPDFAnnotationToolbar *annotationToolbar;
- (id)initWithAnnotationToolbar:(id)arg1;
- (id)initWithToolbar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

