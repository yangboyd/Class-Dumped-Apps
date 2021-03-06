//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStickerEditBaseView.h"

#import "ACCTextViewDelegate-Protocol.h"
#import "AWEInfoStickerEditViewProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ACCEditPageLayoutManager, ACCEditPageTextStorage, ACCEditPageTextView, AWEEditStickerBubbleManager, AWEEditorStickerGestureViewController, AWEInteractionStickerLocationModel, AWEInteractionStickerModel, AWEStoryColor, AWEStoryFontModel, AWEStoryTextImageModel, CAShapeLayer, NSArray, NSMutableArray, NSString, UIButton, UIColor, UIView;
@protocol AWEEditorStickerGestureDelegate;

@interface AWEStoryBackgroundTextView : AWEStickerEditBaseView <UIGestureRecognizerDelegate, ACCTextViewDelegate, AWEInfoStickerEditViewProtocol>
{
    _Bool _selected;
    _Bool _isFirstAppear;
    _Bool _enableEdit;
    _Bool _lastHandleState;
    _Bool _setAnchorForRotateAndScale;
    _Bool _isInteractionSticker;
    _Bool _isSelectTimeMode;
    _Bool _isCaption;
    _Bool _hasFeedback;
    _Bool _notRefresh;
    _Bool _isForImage;
    id <AWEEditorStickerGestureDelegate> _delegate;
    AWEEditorStickerGestureViewController *_gestureManager;
    CDUnknownBlockType _textChangedBlock;
    CDUnknownBlockType _shouldBeginGestureBlock;
    CDUnknownBlockType _autoDismissHandleBlock;
    AWEStoryColor *_color;
    AWEStoryFontModel *_selectFont;
    unsigned long long _style;
    long long _alignmentType;
    double _leftBeyond;
    ACCEditPageTextView *_textView;
    UIButton *_deleteButton;
    UIButton *_selectTimeButton;
    UIButton *_handleButton;
    UIButton *_editButton;
    double _currentScale;
    double _relativeScale;
    double _zoomScale;
    double _keyboardHeight;
    UIView *_darkBGView;
    NSString *_poiName;
    AWEInteractionStickerLocationModel *_stickerLocation;
    AWEInteractionStickerLocationModel *_stickerLocationForInteraction;
    AWEInteractionStickerModel *_interactionStickerInfo;
    NSString *_textStickerId;
    long long _stickerEditId;
    AWEStoryTextImageModel *_textInfoModel;
    double _lastBorderViewBorderWidth;
    NSMutableArray *_layerPool;
    NSMutableArray *_currentShowLayerArray;
    UIColor *_fillColor;
    UIView *_borderView;
    CAShapeLayer *_borderShapeLayer;
    CAShapeLayer *_centerHorizontalDashLayer;
    double _defaultFontSize;
    NSArray *_bubbleItems;
    ACCEditPageLayoutManager *_layoutManager;
    ACCEditPageTextStorage *_textStorage;
    struct CGPoint _basicCenter;
    struct CGPoint _lastCenter;
    struct CGPoint _editCenter;
    struct CGSize _originalSize;
    struct CGPoint _lastAnchorPoint;
    struct CGPoint _touchPoint;
    struct CGAffineTransform _lastHandleButtonTransform;
    struct CGAffineTransform _lastSelectTimeButtonTransform;
    struct CGAffineTransform _lastDeleteButtonTransform;
    struct CGAffineTransform _lastEditButtonTransform;
    struct CGAffineTransform _lastTransForm;
    struct CGAffineTransform _lastBorderViewTransform;
}

@property(retain, nonatomic) ACCEditPageTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) ACCEditPageLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(copy, nonatomic) NSArray *bubbleItems; // @synthesize bubbleItems=_bubbleItems;
@property(nonatomic) double defaultFontSize; // @synthesize defaultFontSize=_defaultFontSize;
@property(nonatomic) _Bool isForImage; // @synthesize isForImage=_isForImage;
@property(nonatomic) _Bool notRefresh; // @synthesize notRefresh=_notRefresh;
@property(nonatomic) _Bool hasFeedback; // @synthesize hasFeedback=_hasFeedback;
@property(retain, nonatomic) CAShapeLayer *centerHorizontalDashLayer; // @synthesize centerHorizontalDashLayer=_centerHorizontalDashLayer;
@property(retain, nonatomic) CAShapeLayer *borderShapeLayer; // @synthesize borderShapeLayer=_borderShapeLayer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) struct CGAffineTransform lastBorderViewTransform; // @synthesize lastBorderViewTransform=_lastBorderViewTransform;
@property(nonatomic) struct CGPoint lastAnchorPoint; // @synthesize lastAnchorPoint=_lastAnchorPoint;
@property(nonatomic) struct CGAffineTransform lastTransForm; // @synthesize lastTransForm=_lastTransForm;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSMutableArray *currentShowLayerArray; // @synthesize currentShowLayerArray=_currentShowLayerArray;
@property(retain, nonatomic) NSMutableArray *layerPool; // @synthesize layerPool=_layerPool;
@property(nonatomic) double lastBorderViewBorderWidth; // @synthesize lastBorderViewBorderWidth=_lastBorderViewBorderWidth;
@property(nonatomic) struct CGAffineTransform lastEditButtonTransform; // @synthesize lastEditButtonTransform=_lastEditButtonTransform;
@property(nonatomic) struct CGAffineTransform lastDeleteButtonTransform; // @synthesize lastDeleteButtonTransform=_lastDeleteButtonTransform;
@property(nonatomic) struct CGAffineTransform lastSelectTimeButtonTransform; // @synthesize lastSelectTimeButtonTransform=_lastSelectTimeButtonTransform;
@property(nonatomic) struct CGAffineTransform lastHandleButtonTransform; // @synthesize lastHandleButtonTransform=_lastHandleButtonTransform;
@property(nonatomic) _Bool isCaption; // @synthesize isCaption=_isCaption;
@property(nonatomic) _Bool isSelectTimeMode; // @synthesize isSelectTimeMode=_isSelectTimeMode;
@property(retain, nonatomic) AWEStoryTextImageModel *textInfoModel; // @synthesize textInfoModel=_textInfoModel;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) long long stickerEditId; // @synthesize stickerEditId=_stickerEditId;
@property(retain, nonatomic) NSString *textStickerId; // @synthesize textStickerId=_textStickerId;
@property(retain, nonatomic) AWEInteractionStickerModel *interactionStickerInfo; // @synthesize interactionStickerInfo=_interactionStickerInfo;
@property(retain, nonatomic) AWEInteractionStickerLocationModel *stickerLocationForInteraction; // @synthesize stickerLocationForInteraction=_stickerLocationForInteraction;
@property(retain, nonatomic) AWEInteractionStickerLocationModel *stickerLocation; // @synthesize stickerLocation=_stickerLocation;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) UIView *darkBGView; // @synthesize darkBGView=_darkBGView;
@property(nonatomic) _Bool isInteractionSticker; // @synthesize isInteractionSticker=_isInteractionSticker;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) struct CGPoint editCenter; // @synthesize editCenter=_editCenter;
@property(nonatomic) _Bool setAnchorForRotateAndScale; // @synthesize setAnchorForRotateAndScale=_setAnchorForRotateAndScale;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) double relativeScale; // @synthesize relativeScale=_relativeScale;
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
@property(nonatomic) _Bool lastHandleState; // @synthesize lastHandleState=_lastHandleState;
@property(nonatomic) _Bool enableEdit; // @synthesize enableEdit=_enableEdit;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *handleButton; // @synthesize handleButton=_handleButton;
@property(retain, nonatomic) UIButton *selectTimeButton; // @synthesize selectTimeButton=_selectTimeButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) ACCEditPageTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct CGPoint lastCenter; // @synthesize lastCenter=_lastCenter;
@property(nonatomic) struct CGPoint basicCenter; // @synthesize basicCenter=_basicCenter;
@property(nonatomic) double leftBeyond; // @synthesize leftBeyond=_leftBeyond;
@property(nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) AWEStoryFontModel *selectFont; // @synthesize selectFont=_selectFont;
@property(retain, nonatomic) AWEStoryColor *color; // @synthesize color=_color;
@property(copy, nonatomic) CDUnknownBlockType autoDismissHandleBlock; // @synthesize autoDismissHandleBlock=_autoDismissHandleBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginGestureBlock; // @synthesize shouldBeginGestureBlock=_shouldBeginGestureBlock;
@property(copy, nonatomic) CDUnknownBlockType textChangedBlock; // @synthesize textChangedBlock=_textChangedBlock;
@property(nonatomic) __weak AWEEditorStickerGestureViewController *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(nonatomic) __weak id <AWEEditorStickerGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configTouchPointForShowBubble;
- (_Bool)isValidRect:(struct CGRect)arg1;
- (_Bool)setBounds:(struct CGRect)arg1 scale:(double)arg2;
- (void)updateLocation;
- (void)regenerateInteractionStickerInfo;
- (void)hideAngleHelperDashLine;
- (void)showAngleHelperDashLine;
- (void)updateStartTimeAndEndTimeForInteractionStickerInfo;
- (id)poiStickerInContainer:(id)arg1;
- (id)poiLblWithAlpha:(double)arg1;
- (double)poiContainerHeight;
- (double)poiContainerWidth;
- (id)poiAttributedStringWithName:(id)arg1;
- (id)poiContent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (id)drawAlignmentRightLineRectArray:(id)arg1;
- (id)drawAlignmentLeftLineRectArray:(id)arg1;
- (id)drawAlignmentCenterLineRectArray:(id)arg1;
- (struct CGPoint)rightBottomCenterWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)rightBottomWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)rightBottomCenterWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)rightBottomWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)rightTopCenterWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)rightTopWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)rightTopCenterWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)rightTopWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)bottomMidPointWithRect:(struct CGRect)arg1;
- (struct CGPoint)topMidPointWithRect:(struct CGRect)arg1;
- (struct CGPoint)leftBottomCenterWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)leftBottomWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)leftBottomCenterWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)leftBottomWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)leftTopCenterWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)leftTopWithRect_down:(struct CGRect)arg1;
- (struct CGPoint)leftTopCenterWithRect_up:(struct CGRect)arg1;
- (struct CGPoint)leftTopWithRect_up:(struct CGRect)arg1;
- (void)drawWithLineRectArray:(id)arg1 fillColor:(id)arg2;
- (void)drawBackgroundWithFillColor:(id)arg1;
- (void)refreshFont;
- (void)doAfterChange;
- (void)resetTextViewAlignment;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) __weak AWEEditStickerBubbleManager *bubble;
- (void)setRealStartTime:(double)arg1;
- (void)setRealDuration:(double)arg1;
- (void)clickEditButton:(id)arg1;
- (void)clickSelectTimeButton:(id)arg1;
- (void)clickDeleteButton:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)setCanOperate:(_Bool)arg1;
- (void)handleContentScaleFactor;
- (void)panAction:(id)arg1;
- (void)restoreActive;
- (void)showHandleThenDismiss;
- (void)autoDismissHandle;
- (void)hideHandle;
- (void)p_showHandle:(_Bool)arg1;
- (void)initPosWithSuperView:(id)arg1;
- (void)transToRecordPosWithSuperView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transToRecordPosWithSuperView:(id)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetWithSuperView:(id)arg1;
- (void)p_updateFrame;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupDashLineLayers;
- (void)setupUI;
- (void)recoverWikipediaAnchors:(id)arg1;
- (void)initializeWithTextInfo:(id)arg1 anchorModels:(id)arg2 isForImage:(_Bool)arg3;
- (id)initWithTextInfo:(id)arg1 anchorModels:(id)arg2 isForImage:(_Bool)arg3;
- (id)initAsCaptionGestureView;
- (id)initWithIsForImage:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

