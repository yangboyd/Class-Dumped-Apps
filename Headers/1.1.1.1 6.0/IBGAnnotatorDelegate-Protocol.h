//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IBGFreeDrawingAnnotationView, IBGScreenshotAnnotationsView, NSMutableArray, UIColor, UIImage;

@protocol IBGAnnotatorDelegate
@property(retain, nonatomic) UIColor *selectedColor;
@property(retain, nonatomic) NSMutableArray *touchPoints;
@property(nonatomic) long long currentAnnotationViewType;
@property(retain, nonatomic) IBGScreenshotAnnotationsView *screenshotAnnotationsView;
@property(retain, nonatomic) IBGFreeDrawingAnnotationView *currentAnnotationView;
- (void)unselectAllAnnotationViews;
- (void)didEndAnnotating;
- (void)didStartAnnotating;
- (void)didDetectImage:(UIImage *)arg1 withOriginalImage:(UIImage *)arg2;
@end

