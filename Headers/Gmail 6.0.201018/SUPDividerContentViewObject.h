//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@protocol SUPContainerScheming;

@interface SUPDividerContentViewObject : GOOBaseContentViewObject
{
    id <SUPContainerScheming> _containerScheme;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) id <SUPContainerScheming> containerScheme; // @synthesize containerScheme=_containerScheme;
- (Class)contentViewClass;
- (id)initWithStyle:(long long)arg1 containerScheme:(id)arg2;

@end

