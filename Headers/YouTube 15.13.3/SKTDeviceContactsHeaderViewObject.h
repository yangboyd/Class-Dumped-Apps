//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentViewObject.h>

@class SKTColorTheme;
@protocol UITraitEnvironment;

@interface SKTDeviceContactsHeaderViewObject : GOOTextContentViewObject
{
    SKTColorTheme *_colors;
    id <UITraitEnvironment> _userInterfaceElement;
}

+ (id)objectWithTitle:(id)arg1 accessibilityTraits:(unsigned long long)arg2 userInterfaceElement:(id)arg3 colors:(id)arg4;
@property(nonatomic) __weak id <UITraitEnvironment> userInterfaceElement; // @synthesize userInterfaceElement=_userInterfaceElement;
@property(retain, nonatomic) SKTColorTheme *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)textColor;

@end

