//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol GDDVersionIncompatibleDialogPresenterDelegate;

@interface GDDVersionIncompatibleDialogPresenter : NSObject
{
    _Bool _presenting;
    id <GDDVersionIncompatibleDialogPresenterDelegate> _delegate;
    NSString *_appName;
    NSURL *_appStoreURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <GDDVersionIncompatibleDialogPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addOpenInViewerButtonToMDCAlert:(id)arg1;
- (void)addCloseDocumentButtonToMDCAlert:(id)arg1;
- (void)addDismissButtonToMDCAlert:(id)arg1;
- (void)addUpdateButtonToMDCAlert:(id)arg1;
- (void)addOpenInViewerButtonToAlert:(id)arg1;
- (void)addCloseDocumentButtonToAlert:(id)arg1;
- (void)addDismissButtonToAlert:(id)arg1;
- (void)addUpdateButtonToAlert:(id)arg1;
- (id)dialogWithTitle:(id)arg1 message:(id)arg2;
- (void)presentAppIncompatibleWithDocumentDialogWithDocumentViewable:(_Bool)arg1;
- (void)presentDialogForDialogType:(long long)arg1;
- (id)initWithAppConfig:(id)arg1;
- (id)initWithAppName:(id)arg1 appStoreURL:(id)arg2;

@end

