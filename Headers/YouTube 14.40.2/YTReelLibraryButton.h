//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTQTMButton.h"

@interface YTReelLibraryButton : YTQTMButton
{
    _Bool _compact;
    _Bool _circular;
}

+ (id)placeholderImageOfSize:(double)arg1 color:(id)arg2;
+ (id)button;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic, getter=isCompact) _Bool compact; // @synthesize compact=_compact;
- (void)layoutSubviews;

@end

