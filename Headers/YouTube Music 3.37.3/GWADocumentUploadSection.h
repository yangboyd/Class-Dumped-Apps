//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "GWAButtonViewDelegate-Protocol.h"
#import "GWACardScanningViewControllerDelegate-Protocol.h"
#import "GWAFlowSection-Protocol.h"
#import "GWATriggerComponent-Protocol.h"
#import "GWAUploadedDocumentViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class GWACardScanningViewController, GWAComponentGroup, GWADependencyGraph, GWAFlowContext, GWALabel, GWAUploadedDocumentView, NSArray, NSData, NSMutableArray, NSString, OrchDocumentUploadForm, UIColor, UIImage, UIStackView;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWADocumentUploadSection : NSObject <GOOAlertViewDelegate, GWAButtonViewDelegate, GWACardScanningViewControllerDelegate, GWATriggerComponent, GWAUploadedDocumentViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, GWAFlowSection>
{
    _Bool _hasBeenPresented;
    OrchDocumentUploadForm *_form;
    GWAFlowContext *_context;
    NSData *_uploadToken;
    GWAUploadedDocumentView *_uploadImage;
    unsigned long long _uploadStatus;
    GWACardScanningViewController *_cardScanningViewController;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_cameraTriggers;
    UIStackView *_buttonView;
    NSArray *_headerInfoMessages;
    GWALabel *_errorLabel;
    id <GWACardComponentDelegate> _cardComponentDelegate;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    long long _documentSelectionMode;
}

@property(nonatomic) long long documentSelectionMode; // @synthesize documentSelectionMode=_documentSelectionMode;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate; // @synthesize cardComponentDelegate=_cardComponentDelegate;
- (void).cxx_destruct;
- (id)errorLabel;
- (id)additionalInfoButtonItemForInfo:(id)arg1;
- (id)closeButtonItem;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (id)buttonView;
- (_Bool)shouldPresentCamera;
- (void)showAdditionalInfo;
- (void)closeWidget;
- (id)base64EncodedUploadToken;
- (id)webSafeEncodedImageDataFromImage:(id)arg1 forMimeType:(id *)arg2;
- (id)imageParameterWithImage:(id)arg1;
- (void)uploadImage:(id)arg1;
- (void)presentCameraViewController;
- (void)uploadedDocumentViewRemoveDocument:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1;
- (void)cardScanningViewController:(id)arg1 didCaptureImage:(id)arg2;
- (void)cardScanningViewControllerDidCancel:(id)arg1;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)validate;
@property(nonatomic) unsigned long long fieldDisplayType;
- (_Bool)hasPendingTask;
- (void)sectionHasBeenPresentedInForm;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)value;
- (id)initWithDocumentUploadForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

