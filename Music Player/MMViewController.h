//
//  MMViewController.h
//  Music Player
//
//  Created by Mathias on 17.09.14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface MMViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) IBOutlet UIButton *togglePlayPause;
@property (strong, nonatomic) IBOutlet UILabel *songName;
@property (strong, nonatomic) IBOutlet UILabel *durationOutlet;
@property (strong, nonatomic) IBOutlet UISlider *sliderOutlet;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIImageView *imageViewArtwork;

//Actions
- (IBAction)togglePlayPauseTapped:(UIButton *)sender;

- (IBAction)sliderDragged:(id)sender;
- (IBAction)sliderTouchDown:(id)sender;
- (IBAction)sliderTouchUpInside:(id)sender;
- (IBAction)sliderTouchUpOutside:(id)sender;

@property (strong, nonatomic) IBOutlet UIView *controlView;

@end
