//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCMiniProfileStorySubscribeButtonViewModel : NSObject <NSCopying>
{
    _Bool _userInteractionEnabled;
    _Bool _showLoadingIndicator;
    _Bool _shouldReverseColor;
    NSString *_title;
    UIColor *_color;
    UIImage *_image;
}

@property(readonly, nonatomic) _Bool shouldReverseColor; // @synthesize shouldReverseColor=_shouldReverseColor;
@property(readonly, nonatomic) _Bool showLoadingIndicator; // @synthesize showLoadingIndicator=_showLoadingIndicator;
@property(readonly, nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 userInteractionEnabled:(_Bool)arg4 showLoadingIndicator:(_Bool)arg5 shouldReverseColor:(_Bool)arg6;

@end

