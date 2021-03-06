//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKitUI/PSPDFStylusDriverDelegate-Protocol.h>

@class NSString, PSPDFAnnotationStateManager, PSPDFDrawView, PSPDFStylusManager;

@interface PSPDFAnnotationStateManagerVendorStylusSupport : NSObject <PSPDFStylusDriverDelegate>
{
    PSPDFAnnotationStateManager *_annotationStateManager;
    PSPDFDrawView *_currentDrawView;
    PSPDFStylusManager *_stylusManager;
}

@property(retain, nonatomic) PSPDFStylusManager *stylusManager; // @synthesize stylusManager=_stylusManager;
@property(nonatomic) __weak PSPDFDrawView *currentDrawView; // @synthesize currentDrawView=_currentDrawView;
@property(nonatomic) __weak PSPDFAnnotationStateManager *annotationStateManager; // @synthesize annotationStateManager=_annotationStateManager;
- (void).cxx_destruct;
- (void)registerPageViewForStylusSupport:(id)arg1;
- (void)didConfigureSpreadViewNotification:(id)arg1;
- (CDStruct_19cde01f)drawingPointForTouches:(id)arg1;
- (void)touchEnded:(id)arg1 cancelled:(_Bool)arg2;
- (void)stylusTouchCancelled:(id)arg1;
- (void)stylusTouchEnded:(id)arg1;
- (void)touchMoved:(id)arg1 began:(_Bool)arg2;
- (void)stylusTouchMoved:(id)arg1;
- (void)stylusTouchBegan:(id)arg1;
- (void)connectionStatusChanged;
- (void)registerHooks;
- (void)dealloc;
- (id)initWithAnnotationStateManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

