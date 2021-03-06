//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEAssistantComponent.h"

@class ICEComponent;

@interface ICEAssistantSelectiveContent : ICEAssistantComponent
{
    _Bool _isSelected;
    _Bool _isReselectable;
    _Bool _isFooter;
    ICEComponent *_content;
}

+ (_Bool)supportsSecureCoding;
+ (Class)mutableSubclass;
@property(nonatomic) _Bool isFooter; // @synthesize isFooter=_isFooter;
@property(nonatomic) _Bool isReselectable; // @synthesize isReselectable=_isReselectable;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) ICEComponent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;

@end

