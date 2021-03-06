//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import <Core/UITextViewDelegate-Protocol.h>
#import <Core/WAWebPageFromTextLoaderDelegate-Protocol.h>
#import <Core/WAWebURLPreviewViewDelegate-Protocol.h>

@class NSString, WADoneWithSpinnerBarButtonItem, WARecipientNameView, WATextView, WAWebPageFromTextLoader, WAWebURLPreviewView;
@protocol WATextSharingViewControllerDelegate;

@interface WATextSharingViewController : WAViewController <WAWebPageFromTextLoaderDelegate, UITextViewDelegate, WAWebURLPreviewViewDelegate>
{
    NSString *_initialText;
    NSString *_recipientName;
    WAWebPageFromTextLoader *_webPageLoader;
    WAWebURLPreviewView *_webURLPreview;
    WADoneWithSpinnerBarButtonItem *_sendButton;
    WATextView *_textView;
    double _keyboardHeight;
    WARecipientNameView *_recipientView;
    _Bool _didClear;
    _Bool _addCancelButton;
    _Bool _statusSelected;
    id <WATextSharingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WATextSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textViewDidChange:(id)arg1;
@property(nonatomic, getter=isSpinnerHidden) _Bool spinnerHidden;
- (void)keyboardDidChangeLayout:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithInitialText:(id)arg1 recipientName:(id)arg2 showCancelButton:(_Bool)arg3 statusSelected:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

