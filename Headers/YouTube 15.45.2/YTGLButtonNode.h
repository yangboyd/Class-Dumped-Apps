//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGLGroupNode.h>

@class YTGLBaseNode;

@interface YTGLButtonNode : YTGLGroupNode
{
    YTGLBaseNode *_hitAreaNode;
}

- (void).cxx_destruct;
- (id)initRoundedRectangleButtonWithInset:(double)arg1 size:(struct CGSize)arg2 color:(id)arg3 buttonScale:(float)arg4 hoverAnimationStyle:(long long)arg5 onClickedBlock:(CDUnknownBlockType)arg6 sceneNodeFactory:(id)arg7;
- (id)initWithButtonImage:(id)arg1 backgroundImage:(id)arg2 backgroundImageScale:(float)arg3 hoverAnimationStyle:(long long)arg4 onClickedBlock:(CDUnknownBlockType)arg5 sceneNodeFactory:(id)arg6;

@end

