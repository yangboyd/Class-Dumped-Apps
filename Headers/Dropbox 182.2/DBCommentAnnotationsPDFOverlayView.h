//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBCommentAnnotationsOverlayView.h"

@class PSPDFPageView;

@interface DBCommentAnnotationsPDFOverlayView : DBCommentAnnotationsOverlayView
{
    PSPDFPageView *_pdfPageView;
}

@property(nonatomic) __weak PSPDFPageView *pdfPageView; // @synthesize pdfPageView=_pdfPageView;
- (void).cxx_destruct;
- (struct CGPoint)convertAnnotationCoordinateToOverlayPoint:(id)arg1;
- (id)createAnnotationViewsForComment:(id)arg1;
- (_Bool)supportsViewingAnnotation:(id)arg1;

@end

