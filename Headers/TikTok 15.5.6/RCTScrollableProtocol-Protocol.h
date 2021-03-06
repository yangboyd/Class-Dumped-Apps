//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol UIScrollViewDelegate;

@protocol RCTScrollableProtocol
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)removeScrollListener:(NSObject<UIScrollViewDelegate> *)arg1;
- (void)addScrollListener:(NSObject<UIScrollViewDelegate> *)arg1;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)scrollToEnd:(_Bool)arg1;
- (void)scrollToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollToOffset:(struct CGPoint)arg1;
@end

