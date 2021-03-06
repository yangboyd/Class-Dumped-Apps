//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GIKExpressSignInConfiguration : NSObject <NSCopying>
{
    _Bool _showLogo;
    _Bool _dismissAfterAccountSelection;
    _Bool _transparentBackgroundView;
    _Bool _presentAsModal;
    _Bool _alwaysShowBottomSection;
    NSString *_expressTitle;
    NSString *_expressSubtitle;
    CDUnknownBlockType _formatActionTitle;
    double _backgroundViewMinVisibleHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysShowBottomSection; // @synthesize alwaysShowBottomSection=_alwaysShowBottomSection;
@property(nonatomic) _Bool presentAsModal; // @synthesize presentAsModal=_presentAsModal;
@property(nonatomic) _Bool transparentBackgroundView; // @synthesize transparentBackgroundView=_transparentBackgroundView;
@property(nonatomic) double backgroundViewMinVisibleHeight; // @synthesize backgroundViewMinVisibleHeight=_backgroundViewMinVisibleHeight;
@property(nonatomic) _Bool dismissAfterAccountSelection; // @synthesize dismissAfterAccountSelection=_dismissAfterAccountSelection;
@property(copy, nonatomic) CDUnknownBlockType formatActionTitle; // @synthesize formatActionTitle=_formatActionTitle;
@property(copy, nonatomic) NSString *expressSubtitle; // @synthesize expressSubtitle=_expressSubtitle;
@property(copy, nonatomic) NSString *expressTitle; // @synthesize expressTitle=_expressTitle;
@property(nonatomic) _Bool showLogo; // @synthesize showLogo=_showLogo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

