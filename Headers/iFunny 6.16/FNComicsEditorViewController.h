//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNBaseViewController.h>

#import <Funny/FNComicsEditorButtonViewDelegate-Protocol.h>
#import <Funny/UIActionSheetDelegate-Protocol.h>
#import <Funny/UIAlertViewDelegate-Protocol.h>
#import <Funny/UIPopoverControllerDelegate-Protocol.h>

@class ComicsBorderView, FNComicsEditorButtonView, FNTextButton, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIScrollView;

@interface FNComicsEditorViewController : FNBaseViewController <UIAlertViewDelegate, UIPopoverControllerDelegate, UIActionSheetDelegate, FNComicsEditorButtonViewDelegate>
{
    float comicsScale;
    UIScrollView *comicsView;
    NSMutableDictionary *comicsInfo;
    ComicsBorderView *comicsBorderView;
    FNComicsEditorButtonView *selectedButton;
    _Bool fromDidLoad;
    int topIndent;
    int comicsHeight;
    UIButton *addFrameButton;
    NSMutableArray *frameButtonsArray;
    NSString *contentId;
    FNTextButton *doneButton;
    NSMutableDictionary *contentInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNComicsEditorButtonView *selectedButton; // @synthesize selectedButton;
@property(retain, nonatomic) NSMutableDictionary *contentInfo; // @synthesize contentInfo;
- (void)dealloc;
- (void)onRemoveFrame:(id)arg1;
- (void)onPasteFrame:(id)arg1;
- (void)onCutFrame:(id)arg1;
- (void)onCopyFrame:(id)arg1;
- (void)onChooseFrame:(id)arg1;
- (void)onDone;
- (void)onAddFrame;
- (void)onChangeBorder:(id)arg1;
- (void)onRemoveComics;
- (void)autoSaveComics;
- (void)createDefaultComics;
- (void)loadComicsView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateDoneButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

