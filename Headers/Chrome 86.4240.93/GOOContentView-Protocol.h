//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@protocol GOOContentView <NSObject>
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;

@optional
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@end

