//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject, NSURL;
@protocol FBVerveMovieLayerDelegate, OS_dispatch_queue;

@interface FBVerveMovieLayer : CALayer
{
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVAsset *_asset;
    struct CGSize _assetSize;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_item;
    double _currentTime;
    id _image;
    double _imageTime;
    CALayer *_imageLayer;
    BOOL _loadingImage;
    BOOL _needsUpdate;
    BOOL _hasContent;
    BOOL _playing;
    BOOL _loops;
    NSURL *_url;
    id <FBVerveMovieLayerDelegate> _movieDelegate;
    float _volume;
    struct CGSize _contentSize;
}

+ (id)movieLayerWithURL:(id)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL loops; // @synthesize loops=_loops;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) __weak id <FBVerveMovieLayerDelegate> movieDelegate; // @synthesize movieDelegate=_movieDelegate;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL hasContent; // @synthesize hasContent=_hasContent;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void).cxx_destruct;
- (void)_setContentSize:(struct CGSize)arg1;
- (void)_removeImage;
- (void)_displayImage;
- (void)_loadedImage:(id)arg1 time:(double)arg2;
- (void)_updateImage;
- (void)_removePlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updatePlayerWithAsset:(id)arg1 size:(struct CGSize)arg2;
- (void)_updateAsset:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_update;
- (void)_setNeedsUpdate;
- (void)layoutSublayers;
- (void)startLoading;
- (void)dealloc;
- (void)invalidateInitialFrameImage;
- (void)invalidate;
- (id)initWithURL:(id)arg1;

@end

