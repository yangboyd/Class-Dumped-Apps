//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCSearchActionButtonViewModel;

@interface SCUnifiedProfileEmptyStateViewModel : NSObject <NSCopying>
{
    NSAttributedString *_text;
    SCSearchActionButtonViewModel *_buttonViewModel;
}

@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 buttonViewModel:(id)arg2;

@end

